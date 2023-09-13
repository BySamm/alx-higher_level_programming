#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @py: Python Object
 * Return: no return
 */
void print_python_bytes(PyObject *py)
{
	char *string;
	long int size, a, limit;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(py))
	{
		printf(" [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = ((PyVarObject *)(py))->ob_size;
	string = ((PyBytesObject *)py)->ob_sval;

	printf(" size: %ld\n", size);
	printf(" trying string: %s\n", string);

	if (size >= 10)
		limit = 10;
	else
		limit = size + 1;

	printf("  first %ld bytes:", limit);

	for (a = 0; a < limit; a++)
		if (string[i] >= 0)
			printf(" %02x", string[a]);
		else
			printf(" %02x", 256 + string[a]);

	printf("\n");
}

/**
 * print_python_list - Prints list information
 *
 * @py: Python Object
 * Return: no return
 */
void print_python_list(PyObject *py)
{
	long int size, a;
	PyListObject *list;
	PyObject *obj;

	size = ((PyVarObject *)(py))->ob_size;
	list = (PyListObject *)py;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (a = 0; a < size; a++)
	{
		obj = ((PyListObject *)py)->ob_item[a];
		printf("Element %ld: %s\n", i, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}

