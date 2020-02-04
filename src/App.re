open Router;
open Utils;

/*Composant HomeApp*/

[@react.component]
let make = () => {
  let route = useRoute();
  <div>
    <h1> {"Hero App" |> str} </h1>
    {
      switch (route) {
      | Home => <Home />
      | ShowHero(id) => <Show id />
      | EditHero(id) => <Edit id />
      | NotFound => <NotFound />
      }
    }
  </div>;
};