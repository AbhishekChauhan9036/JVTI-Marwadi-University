const arr = ["Manav", "Vimal", "Ayush", "Parth", "Tejas"];
arr.push("Nandani"); // to insert at end

arr.unshift("Shrusti"); // to insert at begning
arr.shift(); // te remove at the end
arr.splice(3, 0, "Hepin"); // to insert at position
arr.pop(); // to remove an element at end

// console.table(arr);

const numbers = [10, 20, 3, 1, 0, -6, 90, 55];
numbers.sort();
numbers.reverse();
// console.log(numbers);

const arr1 = [1, 2, 3, 4, 5];
const arr2 = [6, 7, 8, 9, 10];
const arr3 = arr1.concat(arr2);
console.table(arr3);
