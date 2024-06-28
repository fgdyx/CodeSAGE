#VAR1 <VAR2.VAR3>
#VAR1 <assert.VAR3>
int main(int argc, char *argv[])
{
 char * VAR4;
 VAR4 = (char *) malloc(10 * sizeof(char));
 assert (VAR4 != NULL);
 /* BAD */
 VAR4[4105] = '';
 return 0;
}
