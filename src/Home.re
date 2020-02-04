open Hero;
open Utils;

[@react.component]
let make = (~heroes: list(hero)) => {
  let toElement = hero =>
    <tr key={hero.id |> strInt}>
      <td> {hero.name |> str} </td>
      <td> <Link name="Show" href={(hero.id |> strInt) ++ "/show"} /> </td>
      <td> <Link name="Edit" href={(hero.id |> strInt) ++ "/edit"} /> </td>
    </tr>;

  let heroesList = List.map(toElement, heroes);

  <div> <table> <tbody> {heroesList |> arrEl} </tbody> </table> </div>;
};