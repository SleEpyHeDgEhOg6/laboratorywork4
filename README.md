# laboratorywork4


Задание
Необходимо реализовать функцию, которая определяет арифметическое среднее в массиве. Прототип функции:

float mean(const std::vector<float>&);

Необходимо реализовать функцию, которая определяет максимум и минимум в массиве. Прототип функции:

// .first is min

// .second is max

std::pair<float, float> minMax(const std::vector<float>&);

Если массив пуст, функция должна вернуть min и max из std::numeric_limits.

Необходимо реализовать функцию argmax, которая определяет индекс максимума в массиве. Прототип функции необходимо выбрать самостоятельно. Нумерация элементов массива начинается с нуля. Если массив пуст, функция должна вернуть -1.

Необходимо реализовать функцию, которая сортирует по убыванию входной массив. Стандартными функциями для сортировки массива пользоваться нельзя! Прототип функции:

void sort(std::vector<float>&);

Необходимо реализовать функцию remove_first_negative_element, которая удаляет первый отрицательный элемент массива. Прототип функции:

bool remove_first_negative_element(const std::vector<int>& vec, int& removed_element);

Функция возвращает true если удалось удалить элемент, а false если не удалось. Значение удаленного элемента помещать в removed_element, если удаление не произошло то инициализировать removed_element нулем.

Необходимо реализовать функцию, которая заменяет в строке все вхождения подстроки на новую строку. Можно пользоваться функцией std::string::find, о которой можно почитать тут.

std::string replace(const std::string& str, const std::string& old, const std::string& new_string);

Пример:

std::string newString = replace("Can you can a can as a canner can can a can?", "can", "cAN");

std::cout << newString; // "Can you cAN a cAN as a cANner cAN cAN a cAN?"

Необходимо реализовать функцию split, которая делит строку по заданному символу.

std::vector<std::string> split(const std::string&, char sep);

Пример:

std::vector<std::string> arr = split("Can you can a can as a canner can can a can?", ' ');

// arr == {"Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?"};

Если строка состоит только из символов, которые указаны вторым аргументом, функция должна вернуть пустой вектор.

Необходимо реализовать функцию, которая соединяет массив строк в одну строку.

std::string join(const std::vector<std::string>&, const std::string& sep);

Пример:

std::vector<std::string> arr = {"Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?"};

std::string str = join(arr, " ");

// str == "Can you can a can as a canner can can a can?"
