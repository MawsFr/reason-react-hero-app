type id = int;
type name = string;

type hero = {
  id,
  name,
  puissance: option(int),
  image: string,
};