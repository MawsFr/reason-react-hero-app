open Hero;

let heros: list(hero) = [
  {id: 1, name: "Son Goku", puissance: Some(900000), image: "goku.png"},
  {id: 2, name: "Vegeta", puissance: Some(9000), image: "vegeta.png"},
  {id: 3, name: "Yamcha", puissance: None, image: "yamcha.jpeg"},
];

let getAll = () => heros;
let add = (hero: hero, heros: list(hero)) => [hero, ...heros];
let get = id => heros |> List.find(hero => hero.id == id);