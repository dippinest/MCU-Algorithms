<html>
	<title>
		My JavaScript
	</title>

	<body>
		







<script type="text/javascript">
	
















var a = 90, b = 100;
//alert(a + b);
var c = "200";

//alert(c + a);

var myString = "It's my string in JS!"
//alert(myString.length);

//for (var i = 0; i < myString.length; i++)
	//alert(myString[i]);

//alert(myString.slice(0, 6)); // срез строки

//alert(myString.toUpperCase());

//alert(myString.toLowerCase());

var hasApple  = true;
var hasOrange = false;


var array   = [1, 2, 3, 42, 122, 432, "JavaScript"];
var array_2 = ["Java", "Ada", 7.6778, "C#"];

array.push("Ruby");
array.unshift("C++");
array.unshift("Assembler");

//alert(array.pop());   // удаляет последний элемент массива и возвращает его
//alert(array.shift()); // тоже, но 1-й элемент

array.push(...array_2); // добавить элементЫ в конец (unshift - в начало)

delete array[0]; // удалить нулевой элемент

array[20] = "ADA";

// .indexOf("элемент"), colors.indexOf("фиолетовый") --> -1 (если эл-та нет, то вернёт -1)

for (var i = 0; i < array.length; i++)
	document.write(array[i] + " ");

// объединяем эл-ты в одну строку
var arrayString = array.join();
document.write("<br><br>My String is: " + arrayString);

var arrayString = array.join("");
document.write("<br><br>My String is: " + arrayString);

// объединяем эл-ты в одну строку с разделителем
var arrayString = array.join("%");
document.write("<br><br>My String is: " + arrayString);


</script>



























	</body>
</html>