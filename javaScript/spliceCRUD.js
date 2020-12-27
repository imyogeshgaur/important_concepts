
// splice(indextoStart,numberofElementsDeletedAfterStartingIndex,newValues)

// Insert values to Array

const arr = []

arr.splice(arr.length,0,"Yogesh","Mukesh","Suresh","Hitesh")

console.log(arr);

//Update Yogesh To Ramesh

arr.splice(0,1,"Ramesh")

console.log(arr);

// Delete Ramesh and Insert Yogesh To End

arr.splice(0,1) 

console.log(arr);

arr.splice(arr.length,0,"Yogesh")

console.log(arr);