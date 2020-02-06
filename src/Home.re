open Hero;
open Utils;

type action =
  | Loaded(list(hero));

[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(
      (_state, action) =>
        switch (action) {
        | Loaded(data) => data
        },
      [],
    );
      
  React.useEffect0(() =>
    HeroService.getAllAsync()
    |> Js.Promise.then_(heroes => 
         dispatch(Loaded(data)) |> Js.Promise.resolve)
    |> ignore;
   None;
  );

  let heroes = HeroService.getAll();

  let toElement = hero =>
    <tr key={hero.id |> strInt}>
      <td> {hero.nom |> str} </td>
      <td> <Link name="Show" href={(hero.id |> strInt) ++ "/show"} /> </td>
      <td> <Link name="Edit" href={(hero.id |> strInt) ++ "/edit"} /> </td>
    </tr>;

  let heroesList = List.map(toElement, heroes);

  <div> <table> <tbody> {heroesList |> arrEl} </tbody> </table> </div>;
};