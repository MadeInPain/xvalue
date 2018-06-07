.PHONY: clean All

All:
	@echo "----------Building project:[ xvalue - Debug ]----------"
	@cd "xvalue" && "$(MAKE)" -f  "xvalue.mk"
clean:
	@echo "----------Cleaning project:[ xvalue - Debug ]----------"
	@cd "xvalue" && "$(MAKE)" -f  "xvalue.mk" clean
