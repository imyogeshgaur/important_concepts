// reduce(accumulator(first value of array),currentValueOfArray(added to accumulator after iteration),index,arrayToBeTraversed)

//Sum, Average and Product using Reduce Method

const arr = [12,23,34,45,56,67,78,89,90,100]


const sum = arr.reduce((accum,currentVal)=>{
debugger;
    return accum + currentVal
})

console.log(sum);

const prod = arr.reduce((accum,currentVal)=>{
    debugger;
    return accum * currentVal
})

console.log(prod);

const average = arr.reduce((accum,currentVal,index,arr)=>{
    let tot = accum += currentVal
    if(index === arr.length-1){
         return tot/arr.length
    }
    return tot
})

console.log(average);