//call(object,arguments(if function is parametric))

const person1 = {
  name: "Yogesh",
  status: "Coder",
};

const person2 = {
  name: "Mukesh",
  status: "Student",
};

const person = {
  name: "xyz",
  status: "abc",
  callPerson: function () {
    console.log(
      `The Name of the Person is ${this.name} and the Status of the Person is ${this.status}`
    );
  },
};

person.callPerson.call(person2);

const newPerson = {
  callPerson: function (Class, College) {
    console.log(
      `The Name of the Person is ${this.name} and the Status of the Person is ${this.status}` +
        " The Person studies in " +
        Class +
        " class in " +
        College +
        " college"
    );
  },
};

newPerson.callPerson.call(person1, "3D", "Kec");
