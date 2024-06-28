#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new char[50];
 VAR2[0] = '';
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 memmove(VAR2, VAR3, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
