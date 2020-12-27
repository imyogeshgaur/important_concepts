//ARRAY DESTRUCTURING

//Traditional Method(Fetching by Array's Index)

const myArray = ["Yogesh", "Mukesh", "Ramesh", "Hitesh", "Suresh", "Dinesh"];

myArray.forEach((element) => {
  console.log(`${element} is a good boy`);
});

//Destructured Way(Fetching with a Distict Variable)

const myNewArray = ["Yogesh", "Mukesh", "Ramesh", "Hitesh", "Suresh", "Dinesh"];

const [stud1, stud2, stud3, stud4, stud5, stud6] = myNewArray;

console.log(`${stud1} is a good Boy !!!`);
console.log(`${stud2} is a good Boy !!!`);
console.log(`${stud3} is a good Boy !!!`);
console.log(`${stud4} is a good Boy !!!`);
console.log(`${stud5} is a good Boy !!!`);
console.log(`${stud6} is a good Boy !!!`);

//OBJECT DESTRUCTURING

//Traditional Method(Fetching by Object Instance)

const mybio = {
  name: "XYZ",
  age: 50,
  degree: "abc",
  branch: "pqr",
};

console.log("The name of the student is : ", mybio.name);
console.log("The age of the student is : ", mybio.age);
console.log("The degree of the student is : ", mybio.degree);
console.log("The branch of the student is : ", mybio.branch);

//Destructured Way (Fetching by Distinct Variable refrencing to the key of Object)

const myBio = {
  name: "Yogesh",
  age: 20,
  Degree: "Btech",
  Branch: "CSE",
};

const {
  name: nameOfStudent,
  age: ageOfStudent,
  Degree: degreeOfStudent,
  Branch: branchOfStudent,
} = myBio;

console.log("The name of the student is : ", nameOfStudent);
console.log("The age of the student is : ", ageOfStudent);
console.log("The degree of the student is : ", degreeOfStudent);
console.log("The branch of the student is : ", branchOfStudent);
