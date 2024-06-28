#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 /* FLAW: Set data to a value that will cause an integer overflow in the call to malloc() in the sink */
 VAR3 = VAR4 / 2 + 2;
 FUN1(&VAR3);
}
#endif
