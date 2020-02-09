open Hero;
open Utils;

type route =
  | Home
  | EditHero(id)
  | ShowHero(id)
  | NotFound;

let useRoute = () => {
  let url = ReasonReactRouter.useUrl();
  let path = url.path;
  Js.log(path);

  switch (path) {
  | [id, "edit"] => EditHero(id |> intStr)
  | [id, "show"] => ShowHero(id |> intStr)
  | [] => Home
  | _ => NotFound
  };
};