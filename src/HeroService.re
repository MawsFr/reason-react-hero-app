open Hero;

let url_heroes = "https://api.myjson.com/bins/11tlso";
let url_hero1 = "https://api.myjson.com/bins/qidaw";
let url_hero2 = "https://api.myjson.com/bins/f74t4";
let url_hero3 = "https://api.myjson.com/bins/lqwgo";

type heroFetchCouple = (int, string);

let heroesFetchUrls: list(heroFetchCouple) = [
  (1, url_hero1),
  (2, url_hero2),
  (3, url_hero3),
];

/*let heroes: list(hero) = [
    {id: 1, name: "Son Goku", power: Some(900000), image: Some("goku.png")},
    {id: 2, name: "Vegeta", power: Some(9000), image: Some("vegeta.png")},
    {id: 3, name: "Yamcha", power: None, image: Some("yamcha.jpeg")},
  ];*/

let getAllAsync = url =>
  Js.Promise.(
    Fetch.fetch(url)
    |> then_(Fetch.Response.json)
    |> then_(json =>
         json |> HeroDecoder.toHeroes |> (heroes => heroes |> resolve)
       )
    |> catch(_err => resolve([]))
  );

let getHeroFetchUrl = heroId => {
  let (_, url) = heroesFetchUrls |> List.find(((id, _)) => heroId == id);
  url;
};

/* let getAll = () => heroes; */
let add = (hero: hero, heros: list(hero)) => [hero, ...heros];
let get = (id, heroes) => heroes |> List.find(hero => hero.id == id);
let getAsync = id =>
  Js.Promise.(
    Fetch.fetch(id |> getHeroFetchUrl)
    |> then_(Fetch.Response.json)
    |> then_(json =>
         json |> HeroDecoder.toHero |> (heroes => heroes |> resolve)
       )
  );