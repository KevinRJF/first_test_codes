document.addEventListener('DOMContentLoaded', function() {
    document.querySelector('form').addEventListener('submit', function(event) {
        let name = document.querySelector('#name').value;
        alert('ok si hacía algo');
        event.preventDefault();
    });
  });