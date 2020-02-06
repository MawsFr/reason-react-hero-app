open Hero;

let heros: list(hero) = [
  {id: 1, nom: "Son Goku", puissance: Some(900000), image: "goku.png"},
  {id: 2, nom: "Vegeta", puissance: Some(9000), image: "vegeta.png"},
  {id: 3, nom: "Yamcha", puissance: None, image: "yamcha.jpeg"},
];

module Decode = {
  let heroes =
    Json.Decode.list(hero =>
      Json.Decode.{
        id: hero |> field("id", int),
        nom: hero |> field("name", string),
        puissance: hero |> optional(field("puissance", int)),
        image: hero |> field("image", string),
      }
    );
};

let url = "https://api.myjson.com/bins/1127lm";

let getAllAsync = url =>
  Js.Promise.(
    Fetch.fetch(url)
    |> then_(Fetch.Response.json)
    |> then_(json => json |> Decode.heroes |> (heroes => heroes |> resolve))
    |> catch(_err => resolve([]))
  );

let getAll = () => heros;
let add = (hero: hero, heros: list(hero)) => [hero, ...heros];
let get = id => List.find(hero => hero.id == id, heros);