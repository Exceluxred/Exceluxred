function addTask() {
    // Get the task input
    let task = document.getElementById("task").value;

    // Create a new list item
    let listItem = document.createElement("li");
    listItem.classList.add("task");

    // Create a label for the task
    let label = document.createElement("label");
    label.innerText = task;
    listItem.appendChild(label);

    // Create a button for deleting the task
    let deleteButton = document.createElement("button");
    deleteButton.innerText = "Delete";
    deleteButton.onclick = deleteTask;
    listItem.appendChild(deleteButton);

    // Add the new task to the task list
    let taskList = document.getElementById("task-list");
    taskList.appendChild(listItem);

    // Clear the task input
    document.getElementById("task").value = "";
}

function deleteTask(event);