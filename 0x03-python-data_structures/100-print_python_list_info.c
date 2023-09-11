#include <Python.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @py: A Py_Object list.
 */
void print_python_list_info(PyObject *py)
{
	int size, alloc, i;
	PyObject *obj;

	size = Py_SIZE(py);
	alloc = ((PyListObject *)py)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);

		obj = PyList_GetItem(py, i);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
