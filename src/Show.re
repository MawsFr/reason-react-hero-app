open Utils;

[@react.component]
let make = (~id) => {
  let hero = HeroService.get(id);
  <>
    <h2> {"Showing " ++ hero.name |> str} </h2>
    <div className="info"> {hero.name |> str} </div>
    <br />
    <img src={"/images/" ++ hero.image} />
  </>;
};