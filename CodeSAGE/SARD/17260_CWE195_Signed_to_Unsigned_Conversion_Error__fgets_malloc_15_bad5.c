#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR5 = (char *)malloc(VAR2);
 memset(VAR5, '', VAR2-1);
 VAR5[VAR2-1] = '';
 FUN3(VAR5);
 free(VAR5);
 }
}
#endif
