#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: Do not check the return value */
 fscanf(stdin, "", VAR3);
 }
 break;
 }
}
#endif
