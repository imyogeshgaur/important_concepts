//Traditional Method

function sum(a, b, c, d) {
  console.log("Sum is : ", a + b + c + d);
}

sum(10, 20, 30, 40);

//Using Arrow function

const sum = (a, b, c, d) => console.log("Sum is : ", a + b + c + d);
sum(1, 2, 3, 4);

//Trditional Curring in javaScript

function sum(a) {
  return function (b) {
    return function (c) {
      return function (d) {
        console.log("Sum is : ", a + b + c + d);
      };
    };
  };
}

sum(2)(4)(6)(8);

//Curring Using Arrow Functions in javaScript

const sum = (a) => (b) => (c) => (d) => console.log("Sum is : ", a + b + c + d);
sum(5)(10)(15)(20);
