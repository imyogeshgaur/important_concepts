//Normal Function

const add = (a, b) => {
  return a + b;
};

console.log(add(5, 6));

//Default Parameter

const addDefault = (a, b = 5, c = 6) => {
  return a + b + c;
};

console.log(addDefault(11));

//Rest Parameter

const addRest = (...number) => {
  let tot = 0;
  for (let i of number) {
    tot += i;
  }
  console.log(tot);
};

addRest(1, 2, 3, 4, 5, 6, 7, 8, 9);
