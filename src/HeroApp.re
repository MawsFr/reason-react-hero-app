open Hero;
open Router;
open Utils;

/*Composant HomeApp*/

[@react.component]
let make = () => {
  let route: route = useRoute();
  let heroes: list(hero) = HeroService.getAll();
  <div>
    <h1> {"Hero App" |> str} </h1>
    {
      switch (route) {
      | Home => <Home heroes />
      | ShowHero(id) => <Show id />
      | EditHero(id) => <Edit id />
      | NotFound => <NotFound />
      }
    }
  </div>;
};