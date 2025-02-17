const todoList = document.getElementById("todoList");
const newTodoInput = document.getElementById("newTodo");

function addTodo() {
  const todotext = newTodoInput.value;
  if (todotext == "") return;

  const li = document.createElement("li");
  li.textContent = todotext;

  const checkbox = document.createElement("input");
  checkbox.type = "checkbox";

  checkbox.addEventListener("change", () => {
    if (checkbox.checked) {
      li.classList.add("Completed");
    } else {
      li.classList.remove("Completed");
    }
  });

  li.prepend(checkbox);
  todoList.appendChild(li);

  newTodoInput.value = "";
}

/** 
function add() {
    return a + b;
}
// https://www.w3schools.com/js/js_arrow_function.asp
const add = () => a + b ; 
*/

/**
 * const addTodo = function(){}
 */
