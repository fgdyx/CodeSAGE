#ifndef VAR1
int FUN1(int VAR2)
{
 /* FLAW: Set data to a value that will cause an integer overflow in the call to malloc() in the sink */
 VAR2 = VAR3 / 2 + 2;
 return VAR2;
}
#endif
