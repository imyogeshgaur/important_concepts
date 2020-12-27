//Normal Way

const sum = (a, b, c, d) => {
  return a + b + c + d;
};

console.log(sum(1, 2, 3, 4));

//Using Spread Operator

const sumSpread = (a, b, c, d) => {
  return a + b + c + d;
};

const arr = [1, 2, 3, 4];
console.log(sumSpread(...arr));

const arr1 = [1, 2, 3, 4, 5];
console.log(sumSpread(...arr));
