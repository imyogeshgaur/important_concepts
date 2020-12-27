// Normal Way

const add = (a, b) => {
  return a + b;
};

console.log(add(3, 4));

const sub = (a, b) => {
  return Math.abs(a - b);
};

console.log(sub(3, 4));

const mult = (a, b) => {
  return a * b;
};

console.log(mult(3, 4));

const div = (a, b) => {
  if (a > b) {
    return Math.round(a / b, 2);
  } else {
    return Math.round(b / a, 2);
  }
};

console.log(div(3, 4));

//using HOF

const addHOF = (a, b) => {
  return a + b;
};

const subHOF = (a, b) => {
  return Math.abs(a - b);
};

const multHOF = (a, b) => {
  return a * b;
};

const divHOF = (a, b) => {
  if (a > b) {
    return Math.round(a / b, 2);
  } else {
    return Math.round(b / a, 2);
  }
};

// Master Method(HOF)

const calculate = (num1, num2, operator) => {
  return operator(num1, num2);
};

console.log(calculate(8, 9, add));
console.log(calculate(8, 9, sub));
console.log(calculate(8, 9, mult));
console.log(calculate(8, 9, div));
