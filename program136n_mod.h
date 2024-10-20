// Автор:Высоцкая Инесса Д.
// program136n_mod.h
// часть модуля (файл, содержащий заголовки функций)
using namespace std; // используем пространство имен std для того, чтобы не писать "std" перед вектором

namespace operate_array // пространство имен для модуля(создано самостоятельно)
{
/// Функция заполнения массива рандомными числами
/// array_num - массив, передаваемый по ссылке, n - количество элементов в массиве
void input_array(float *array_num, size_t n);

/// Функция заполнения массива рандомными числами (вектор)
/// vector<float> &array_num - массив, передаваемый по ссылке типа вектор float
void input_array(vector<float> &array_num);

/// Функция вывода массива на экран
/// array_num - массив, передаваемый по ссылке, n - количество элементов в массиве
void print_array(float *array_num, size_t n);

/// Функция вывода массива на экран(вектор)
/// const vector<float> &array_num - массив, передаваемый по ссылке типа вектор float, const чтобы не изменить массив
void print_array(const vector<float> &array_num);

/// Функция заполнения массива вручную
/// array_num - массив, передаваемый по ссылке, n - количество элементов в массиве
void input_hand_array(float *array_num, size_t n);

/// Функция заполнения массива вручную (вектор)
/// vector<float> &array_num - массив, передаваемый по ссылке типа вектор float
void input_hand_array(vector<float> &array_num);

/// Функция, возвращающая результат вычисления по формуле (sqrt(|a1|)-a1)^2+...+(sqrt(|an|)-an)^2
/// array_num - массив, передаваемый по ссылке, n - количество элементов в массиве
float sum_array(float *array_num, size_t n);

/// Функция, возвращающая результат вычисления по формуле (sqrt(|a1|)-a1)^2+...+(sqrt(|an|)-an)^2 (вектор)
/// const vector<float> &array_num - массив, передаваемый по ссылке типа вектор float, const чтобы не изменить массив
float sum_array(const vector<float> &array_num);

/// Функция сохранения массива в файл
/// const char* name - имя файла, array_num - массив, передаваемый по ссылке, n - количество элементов в массиве
void array_in_file(const char* name, float *array_num, size_t n);

/// Функция сохранения массива в файл (вектор)
/// const char* name - имя файла, const vector<float> &array_num - массив, передаваемый по ссылке типа вектор float, const чтобы не изменить массив
void array_in_file(const char* name, const vector<float> &array_num);

/// Функция загрузки массива из файла
/// const char* name - имя файла, n - количество элементов в массиве, передаём по ссылке для изменения
float *array_out_file(const char* name, size_t &n);

/// Функция загрузки массива из файла (вектор)
/// const char* name - имя файла, vector<float> &array_num - массив, передаваемый по ссылке типа вектор float, n - количество элементов в массиве, передаём по ссылке для изменения
void array_out_file(const char* name, vector<float> &array_num, size_t &n);

/// Проверяет выполнение функции sum_array на правильность вычислений
/// (условие должно быть обязательно верно, если нет, то программа прервёт свою дальнейшую работу и выведет сообщение об ошибке)
void test();
}