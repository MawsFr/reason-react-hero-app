type id = int;
type name = string;

type hero = {
  id,
  name,
  power: option(int),
  image: option(string),
};