open Router;
open Utils;

/*Composant HomeApp*/

[@react.component]
let make = () => {
  let route = useRoute();
  let heroes = HeroService.getAll();
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