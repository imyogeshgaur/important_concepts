const mybio = {
  name: "Yogesh",
  class: "3D",
  subject: "CSE",
  call: function () {
    console.log(
      `My Name is ${this.name} my class is ${this.class} and my subject is ${this.subject}`
    );
  },
  callName: function () {
    console.log(`My name is ${this.name}`);
  },
};

mybio.callName();
const biography = mybio.call.bind();

biography();
