#ifndef VAR1
char * FUN1(char * VAR2)
{
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (char *)malloc(10*sizeof(char));
 return VAR2;
}
#endif
