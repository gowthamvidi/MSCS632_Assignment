function calculateSum(arr) {
    let total = 0;  // use 0 instead of o
    for (let num of arr) {
        total += num;
    }
    return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = calculateSum(numbers);  // remove the space
console.log("Sum in JavaScript:", result);