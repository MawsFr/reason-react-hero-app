type id = int;
type nom = string;

type hero = {
  id,
  nom,
  puissance: option(int),
  image: string,
};