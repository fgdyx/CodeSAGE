#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* FLAW: Set data to a value that will cause an integer overflow in the call to new[] in the sink */
 VAR2 = VAR3 / 2 + 2;
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
#endif
