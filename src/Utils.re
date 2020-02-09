let str = React.string;
let strInt = string_of_int;
let intStr = int_of_string;
let intEl = int => int |> strInt |> str;
let arrEl = arr => arr |> Array.of_list |> ReasonReact.array;