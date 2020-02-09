open Hero;

let toHero = hero =>
  Json.Decode.{
    id: hero |> field("id", int),
    name: hero |> field("name", string),
    power: hero |> optional(field("power", int)),
    image: hero |> optional(field("image", string)),
  };
let toHeroes = Json.Decode.list(toHero);