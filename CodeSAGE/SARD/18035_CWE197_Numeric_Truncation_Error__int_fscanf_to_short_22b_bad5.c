#ifndef VAR1
extern int VAR2;
int FUN1(int VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 }
 return VAR3;
}
#endif
