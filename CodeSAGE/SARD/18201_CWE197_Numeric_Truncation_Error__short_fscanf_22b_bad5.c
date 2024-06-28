#ifndef VAR1
extern int VAR2;
short FUN1(short VAR3)
{
 if(VAR2)
 {
 /* FLAW: Use a number input from the console using fscanf() */
 fscanf (stdin, "", &VAR3);
 }
 return VAR3;
}
#endif
