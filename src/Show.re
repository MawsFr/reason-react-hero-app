open Utils;

[@react.component]
let make = (~id) => {
  let hero = HeroService.get(id);
  <>
    <h2> {"Visualisation de " ++ hero.name |> str} </h2>
    <div> {hero.id |> intEl} </div>
    <div> {hero.name |> str} </div>
    <img src={"/images/" ++ hero.image} />
  </>;
};