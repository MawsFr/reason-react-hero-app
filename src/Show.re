open Utils;

[@react.component]
let make = (~id) => {
  let hero = HeroService.get(id);
  <>
    <h2> {"Visualisation de " ++ hero.nom |> str} </h2>
    <div className="info"> {hero.nom |> str} </div>
    <br />
    <img src={"/images/" ++ hero.image} />
  </>;
};