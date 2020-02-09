let style = {j|
table, th, td  {
    border: 1px solid black;
}
h1 {
    color: #369;
    font-family: Arial, Helvetica, sans-serif;
    font-size: 250%;
}

h2,
h3 {
    color: #444;
    font-family: Arial, Helvetica, sans-serif;
    font-weight: lighter;
}

body {
    margin: 2em;
}

body,
input[text],
button {
    color: #333;
    font-family: Cambria, Georgia;
}

a {
    cursor: pointer;
    cursor: hand;
}

button {
    font-family: Arial;
    background-color: #eee;
    border: none;
    padding: 5px 10px;
    border-radius: 4px;
    cursor: pointer;
    cursor: hand;
}

button:hover {
    background-color: #cfd8dc;
}

button:disabled {
    background-color: #eee;
    color: #aaa;
    cursor: auto;
}

/* Navigation link styles */
nav a {
    padding: 5px 10px;
    text-decoration: none;
    margin-right: 10px;
    margin-top: 10px;
    display: inline-block;
    background-color: #eee;
    border-radius: 4px;
}

nav a:visited,
a:link {
    color: #607D8B;
}

nav a:hover {
    color: #039be5;
    background-color: #CFD8DC;
}

nav a.active {
    color: #039be5;
}

.center {
  max-width: 500px;
  margin: auto;
}

.info {
    padding: 5px 10px;
    text-decoration: none;
    margin-right: 10px;
    margin-top: 10px;
    display: inline-block;
    background-color: #eee;
    border-radius: 4px;
}

/* everywhere else */
* {
    font-family: Arial, Helvetica, sans-serif;
}|j};