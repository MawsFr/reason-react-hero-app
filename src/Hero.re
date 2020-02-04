type id = int;
type nom = string;

type hero = {
  id,
  name: nom,
  puissance: option(int),
  image: string,
};