<script lang="ts" setup>
import { ref } from "vue";
import { type TestBuziDataForTable, testBuziDataForTable } from "./data";
import ComponentsTable from "components/table/index.vue";

const componentsTableProps = ref<SimpleDataTableProps<TestBuziDataForTable>>({
	isIndex: true,
	data: testBuziDataForTable,
	columns: [
		{ prop: "name", label: "姓名", width: 70 },
		{ prop: "age", label: "年龄" },
		{ prop: "operation-bar", label: "操作" },
	],
});
</script>

<template>
	<section>
		<ComponentsTable :="componentsTableProps">
			<template #bodyCell="{ prop, row }">
				<template v-if="prop === 'operation-bar'">
					<ElButton type="warning"> 编辑 </ElButton>
					<ElButton type="info"> 查看 </ElButton>
					<ElButton type="danger"> 删除 </ElButton>
				</template>
			</template>
		</ComponentsTable>
	</section>
</template>
