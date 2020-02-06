open Utils;

[@react.component]
let make = (~id) => {
  let hero = HeroService.get(id);
  <>
    <h2> {"Edition de " ++ hero.nom |> str} </h2>
    <div> {hero.id |> intEl} </div>
    <div> {hero.nom |> str} </div>
    <img src={"/images/" ++ hero.image} />
  </>;
};