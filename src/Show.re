open Hero;
open Utils;

type action =
  | Loaded(hero);

[@react.component]
let make = (~id) => {
  let (state, dispatch) =
    React.useReducer(
      (_state, action) =>
        switch (action) {
        | Loaded(data) => data
        },
      {id: 0, name: "Loading ...", power: None, image: None} /* TODO Change this to new type (like Loading or else) */
    );

  React.useEffect0(() => {
    HeroService.getAsync(id)
    |> Js.Promise.then_(hero => {
         dispatch(Loaded(hero));
         Js.Promise.resolve();
       })
    |> ignore;
    None;
  });

  <>
    <h2> {"Showing " ++ state.name |> str} </h2>
    <div className="info"> {state.id |> intEl} </div>
    <div className="info"> {state.name |> str} </div>
    <div className="info">
      {
        switch (state.power) {
        | Some(power) => power |> intEl
        | None => "This hero is not a real hero" |> str
        }
      }
    </div>
    <br />
    {
      switch (state.image) {
      | Some(image) => <img src={"/images/" ++ image} />
      | None => <div> {"No image" |> str} </div>
      }
    }
  </>;
};