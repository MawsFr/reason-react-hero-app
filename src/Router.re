open Hero;
open Utils;

/* type route */
type route =
  | Home
  | EditHero(id)
  | ShowHero(id)
  | NotFound;

/* Fonction useRoute */
let useRoute = () => {
  let url = ReasonReactRouter.useUrl();
  let path = url.path;

  switch (path) {
  | [id, "edit"] => EditHero(id |> intStr)
  | [id, "show"] => ShowHero(id |> intStr)
  | [] => Home
  | _ => NotFound
  };
};