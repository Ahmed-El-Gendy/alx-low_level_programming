int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int mod(int i, int k);
int div(int i, int k);

/**
* add - adds
* @i: integer
* @k: integer
* Return: sum
*/
int add(int i, int k)
{
	return (i + k);
}
/**
* sub - subtracts
* @i: integer
* @k: integer
* Return: the subtract
*/
int sub(int i, int k)
{
	return (i - k);
}
/**
* mul - multiplies
* @i: integer
* @k: integer
* Return: multiple
*/
int mul(int i, int k)
{
	return (i * k);
}
/**
* div - divide
* @i: integer
* @k: integer
* Return: divide
*/
int div(int i, int k)
{
	return (i / k);
}
/**
* mod -modulus
* @i: integer
* @k: integer
* Return: modulus
*/
int mod(int i, int k)
{
	return (i % k);
}
