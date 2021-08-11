/*
using doesn't to imports, it does only using as inits actual word. But if you want to port over a module,
use #include instead.
*/
#include <cstdio>
namespace helloworldvariant3 {
	class helloworldvariant {
	public:
		helloworldvariant() {
			printf("Hello World!");
		}
	};
}
int main() {
	helloworldvariant3::helloworldvariant::helloworldvariant();
	return 0;
}